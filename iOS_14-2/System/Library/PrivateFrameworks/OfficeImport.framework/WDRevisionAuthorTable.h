/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, WDDocument;

@interface WDRevisionAuthorTable : NSObject {

	NSMutableArray* mAuthors;
	WDDocument* mDocument;

}
-(id)authors;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(unsigned long long)authorCount;
-(id)authorAt:(unsigned long long)arg1 ;
-(unsigned long long)authorAddLookup:(id)arg1 ;
-(void)addAuthor:(id)arg1 ;
@end

