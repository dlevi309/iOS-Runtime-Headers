/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying> {

	NSDictionary* _actionDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * actionDictionary;              //@synthesize actionDictionary=_actionDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * buyParams; 
@property (nonatomic,copy,readonly) NSString * itemName; 
@property (nonatomic,copy,readonly) NSString * subtarget; 
@property (nonatomic,copy,readonly) NSString * URLString; 
-(NSString *)URLString;
-(NSString *)subtarget;
-(NSString *)kind;
-(NSString *)itemName;
-(long long)type;
-(NSString *)buyParams;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResponseButtonActionDictionary:(id)arg1 ;
-(NSDictionary *)actionDictionary;
@end

