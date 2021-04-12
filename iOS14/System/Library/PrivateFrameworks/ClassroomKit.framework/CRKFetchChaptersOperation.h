/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class NSString;

@interface CRKFetchChaptersOperation : CATOperation {

	NSString* mPath;
	NSString* mIdentifierType;
	NSString* mIdentifier;

}
-(BOOL)isAsynchronous;
-(void)main;
-(id)initWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithBook:(id)arg1 ;
-(id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3 ;
-(void)parseOPFFilePathOperationDidFinish:(id)arg1 ;
-(void)parseOFPPackageContentsOperationDidFinish:(id)arg1 ;
-(void)parseTableOfContentsOperationDidFinish:(id)arg1 ;
@end

