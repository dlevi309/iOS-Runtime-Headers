/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


@class CoreDAVXMLData_Impl, NSMutableDictionary, NSMutableArray, NSData;

@interface CoreDAVXMLData : NSObject {

	BOOL _shouldAddFormattingSpaces;
	CoreDAVXMLData_Impl* _dataImpl;
	BOOL _docHasEnded;
	NSMutableDictionary* _seenURIsToPrefixes;
	NSMutableDictionary* _seenURIsToDepth;
	NSMutableArray* _elementStack;

}

@property (assign,nonatomic) BOOL shouldAddFormattingSpaces;              //@synthesize shouldAddFormattingSpaces=_shouldAddFormattingSpaces - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)string:(id)arg1 isEqualToXmlCharString:(const char*)arg2 ;
-(id)init;
-(NSData *)data;
-(void)dealloc;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 ;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
-(void)endElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)setShouldAddFormattingSpaces:(BOOL)arg1 ;
-(const char*)_prefixForNameSpace:(const char*)arg1 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(char*)arg4 ;
-(BOOL)shouldAddFormattingSpaces;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3 ;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
@end

