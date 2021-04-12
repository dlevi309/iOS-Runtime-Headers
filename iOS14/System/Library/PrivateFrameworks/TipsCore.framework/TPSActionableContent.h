/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContent.h>

@class NSArray;

@interface TPSActionableContent : TPSContent {

	NSArray* _actions;

}

@property (nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

