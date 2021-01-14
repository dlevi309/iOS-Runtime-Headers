/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSMutableData, NSError, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {

	NSMutableData* _octetStreamData;
	NSError* _parserError;

}

@property (nonatomic,retain) NSMutableData * octetStreamData;              //@synthesize octetStreamData=_octetStreamData - In the implementation block
@property (readonly) NSError * parserError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(NSMutableData *)octetStreamData;
-(void)setOctetStreamData:(NSMutableData *)arg1 ;
@end

