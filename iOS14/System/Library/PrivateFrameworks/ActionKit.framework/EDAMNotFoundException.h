/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setKey:(NSString *)arg1 ;
@end

