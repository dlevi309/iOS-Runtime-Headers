/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSData, NSNumber;

@interface EDAMData : FATObject {

	NSData* _bodyHash;
	NSNumber* _size;
	NSData* _body;

}

@property (nonatomic,retain) NSData * bodyHash;              //@synthesize bodyHash=_bodyHash - In the implementation block
@property (nonatomic,retain) NSNumber * size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSData * body;                  //@synthesize body=_body - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSData *)bodyHash;
-(void)setBodyHash:(NSData *)arg1 ;
@end

