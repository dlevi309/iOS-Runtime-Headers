/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(NSData *)bodyHash;
-(void)setBodyHash:(NSData *)arg1 ;
@end

