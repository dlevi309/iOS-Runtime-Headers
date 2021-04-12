/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface HFTVInputControlItemValue : NSObject <NSCopying> {

	BOOL _isHidden;
	BOOL _isSelected;
	NSNumber* _identifier;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isHidden;                           //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL isSelected;                         //@synthesize isSelected=_isSelected - In the implementation block
+(id)valueWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(BOOL)arg3 isSelected:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)identifier;
-(BOOL)isHidden;
-(BOOL)isSelected;
-(BOOL)isConfigured;
-(id)initWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(BOOL)arg3 isSelected:(BOOL)arg4 ;
@end

