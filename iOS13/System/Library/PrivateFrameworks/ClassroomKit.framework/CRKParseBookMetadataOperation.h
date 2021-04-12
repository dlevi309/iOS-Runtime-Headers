/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation {

	BOOL mParseImage;
	CRKBook* _book;

}

@property (nonatomic,readonly) CRKBook * book;              //@synthesize book=_book - In the implementation block
-(void)main;
-(BOOL)isAsynchronous;
-(CRKBook *)book;
-(id)initWithBook:(id)arg1 parseImage:(BOOL)arg2 ;
-(void)parseContentsFilePathOperationDidFinish:(id)arg1 ;
-(void)parseBookContentsOperationDidFinish:(id)arg1 ;
@end

