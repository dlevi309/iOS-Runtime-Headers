/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {

	NSData* _inContentAsData;

}

@property (retain,readonly) NSData * inContentAsData;                 //@synthesize inContentAsData=_inContentAsData - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
-(NSString *)name;
-(id)inContent;
-(void)reset;
-(NSData *)inContentAsData;
-(id)initWithContentAsData:(id)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(void)dealloc;
@end

