/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMContactsQuery : FATObject {

	NSNumber* _maxEntries;
	NSString* _prefix;

}

@property (nonatomic,retain) NSNumber * maxEntries;              //@synthesize maxEntries=_maxEntries - In the implementation block
@property (nonatomic,retain) NSString * prefix;                  //@synthesize prefix=_prefix - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)prefix;
-(NSNumber *)maxEntries;
-(void)setMaxEntries:(NSNumber *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
@end

