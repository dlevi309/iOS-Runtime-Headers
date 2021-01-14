/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation {

	BOOL mParseImage;
	CRKBook* _book;

}

@property (nonatomic,readonly) CRKBook * book;              //@synthesize book=_book - In the implementation block
-(CRKBook *)book;
-(BOOL)isAsynchronous;
-(void)main;
-(id)initWithBook:(id)arg1 parseImage:(BOOL)arg2 ;
-(void)parseContentsFilePathOperationDidFinish:(id)arg1 ;
-(void)parseBookContentsOperationDidFinish:(id)arg1 ;
@end

