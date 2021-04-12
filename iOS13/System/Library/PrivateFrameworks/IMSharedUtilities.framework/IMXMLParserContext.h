/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {

	NSData* _inContentAsData;

}

@property (retain,readonly) NSData * inContentAsData;                 //@synthesize inContentAsData=_inContentAsData - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
-(void)dealloc;
-(NSString *)name;
-(void)reset;
-(id)initWithContent:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(NSData *)inContentAsData;
-(id)initWithContentAsData:(id)arg1 ;
-(id)inContent;
@end

