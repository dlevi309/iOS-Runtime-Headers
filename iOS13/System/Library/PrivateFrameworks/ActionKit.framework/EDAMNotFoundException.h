/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATException.h>

@class NSString;

@interface EDAMNotFoundException : FATException {

	NSString* _identifier;
	NSString* _key;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)key;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

