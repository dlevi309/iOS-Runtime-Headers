/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATOperation.h>

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation {

	BOOL _parseImage;
	CRKBook* _book;
	NSString* _filePath;

}

@property (nonatomic,readonly) CRKBook * book;                   //@synthesize book=_book - In the implementation block
@property (nonatomic,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) BOOL parseImage;                  //@synthesize parseImage=_parseImage - In the implementation block
-(void)main;
-(NSString *)filePath;
-(id)fileName;
-(CRKBook *)book;
-(id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(BOOL)arg3 ;
-(void)updateTitleWithDictionaryRef:(CGPDFDictionaryRef)arg1 ;
-(BOOL)parseImage;
-(id)titleFromDictionaryRef:(CGPDFDictionaryRef)arg1 ;
@end

