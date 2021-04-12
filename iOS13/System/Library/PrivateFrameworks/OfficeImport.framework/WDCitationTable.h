/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary, WDDocument;

@interface WDCitationTable : NSObject {

	NSMutableDictionary* mCitations;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)description;
-(unsigned long long)count;
-(id)initWithDocument:(id)arg1 ;
-(WDDocument *)document;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)citationIDs;
@end

