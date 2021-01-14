/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMUserIdentity : FATObject {

	NSNumber* _type;
	NSString* _stringIdentifier;
	NSNumber* _longIdentifier;

}

@property (nonatomic,retain) NSNumber * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * stringIdentifier;              //@synthesize stringIdentifier=_stringIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * longIdentifier;                //@synthesize longIdentifier=_longIdentifier - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setType:(NSNumber *)arg1 ;
-(NSString *)stringIdentifier;
-(void)setStringIdentifier:(NSString *)arg1 ;
-(NSNumber *)type;
-(NSNumber *)longIdentifier;
-(void)setLongIdentifier:(NSNumber *)arg1 ;
@end

