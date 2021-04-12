/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)kind;
-(NSString *)itemName;
-(NSString *)buyParams;
-(NSString *)URLString;
-(NSString *)subtarget;
-(id)initWithResponseButtonActionDictionary:(id)arg1 ;
-(NSDictionary *)actionDictionary;
@end

