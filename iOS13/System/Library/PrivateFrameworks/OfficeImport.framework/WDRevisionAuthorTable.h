/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, WDDocument;

@interface WDRevisionAuthorTable : NSObject {

	NSMutableArray* mAuthors;
	WDDocument* mDocument;

}
-(id)description;
-(id)authors;
-(id)initWithDocument:(id)arg1 ;
-(void)addAuthor:(id)arg1 ;
-(unsigned long long)authorCount;
-(id)authorAt:(unsigned long long)arg1 ;
-(unsigned long long)authorAddLookup:(id)arg1 ;
@end

