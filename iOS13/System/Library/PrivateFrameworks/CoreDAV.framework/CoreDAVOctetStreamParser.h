/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSMutableData, NSError, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {

	NSMutableData* _octetStreamData;
	NSError* _parserError;

}

@property (nonatomic,retain) NSMutableData * octetStreamData;              //@synthesize octetStreamData=_octetStreamData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSError * parserError; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(NSMutableData *)octetStreamData;
-(void)setOctetStreamData:(NSMutableData *)arg1 ;
@end

