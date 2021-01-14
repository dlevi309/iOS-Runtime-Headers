/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary, WDDocument;

@interface WDCitationTable : NSObject {

	NSMutableDictionary* mCitations;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(unsigned long long)count;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(WDDocument *)document;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)citationIDs;
@end

