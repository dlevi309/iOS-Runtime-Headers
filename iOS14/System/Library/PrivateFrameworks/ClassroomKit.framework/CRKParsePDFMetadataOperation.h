/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)filePath;
-(CRKBook *)book;
-(id)fileName;
-(void)main;
-(id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(BOOL)arg3 ;
-(void)updateTitleWithDictionaryRef:(CGPDFDictionaryRef)arg1 ;
-(BOOL)parseImage;
-(id)titleFromDictionaryRef:(CGPDFDictionaryRef)arg1 ;
@end

