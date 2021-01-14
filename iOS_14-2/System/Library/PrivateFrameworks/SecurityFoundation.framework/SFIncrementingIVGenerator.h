/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)generateIVWithLength:(long long)arg1 error:(id*)arg2 ;
-(void)setMessageID:(NSData *)arg1 ;
-(id)init;
-(id)initWithRandomMessageID;
-(id)initWithMessageID:(id)arg1 ;
-(NSData *)messageID;
@end

