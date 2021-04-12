/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <libobjc.A.dylib/SFIVGenerator.h>

@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator> {

	id _incrementingIVGeneratorInternal;

}

@property (nonatomic,copy) NSData * messageID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSData *)messageID;
-(void)setMessageID:(NSData *)arg1 ;
-(id)initWithMessageID:(id)arg1 ;
-(id)initWithRandomMessageID;
-(id)generateIVWithLength:(long long)arg1 error:(id*)arg2 ;
@end

