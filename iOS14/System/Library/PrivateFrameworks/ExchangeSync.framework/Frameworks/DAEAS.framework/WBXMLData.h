/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSMutableData;

@interface WBXMLData : NSObject {

	NSMutableData* _data;
	unsigned char _currentCodePage;
	BOOL _haveAppliedCurrentCodePage;
	NSMutableData* _stateStack;

}

@property (nonatomic,readonly) NSMutableData * data; 
-(void)appendString:(id)arg1 ;
-(id)init;
-(NSMutableData *)data;
-(void)appendData:(id)arg1 ;
-(void)appendInt:(int)arg1 ;
-(void)switchToCodePage:(unsigned char)arg1 ;
-(void)openTag:(unsigned char)arg1 ;
-(void)appendTag:(unsigned char)arg1 withIntContent:(int)arg2 ;
-(void)appendTag:(unsigned char)arg1 withStringContent:(id)arg2 ;
-(void)closeTag:(unsigned char)arg1 ;
-(void)appendEmptyTag:(unsigned char)arg1 ;
-(void)_applyCurrentCodePage;
-(void)renderProspectiveTags;
-(void)appendByteArrayData:(id)arg1 ;
-(id)dataExpectCompleteData:(BOOL)arg1 ;
-(unsigned char)currentCodePage;
-(void)openProspectiveTag:(unsigned char)arg1 ;
-(void)closeProspectiveTag:(unsigned char)arg1 ;
-(void)appendTag:(unsigned char)arg1 withStringContentAsData:(id)arg2 ;
-(void)appendTag:(unsigned char)arg1 withByteArrayDataContent:(id)arg2 ;
@end

