/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATOperation.h>

@class NSURL, NSError;

@interface CRKUnzipOperation : CATOperation {

	NSURL* _zipFileURL;
	NSURL* _destinationDirectoryURL;
	BOMCopierRef _copier;
	NSError* _stashedError;

}

@property (nonatomic,readonly) NSURL * zipFileURL;                           //@synthesize zipFileURL=_zipFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * destinationDirectoryURL;              //@synthesize destinationDirectoryURL=_destinationDirectoryURL - In the implementation block
@property (assign) BOMCopierRef copier;                                      //@synthesize copier=_copier - In the implementation block
@property (nonatomic,retain) NSError * stashedError;                         //@synthesize stashedError=_stashedError - In the implementation block
+(id)errorFromBOMCopierStatus:(int)arg1 message:(id)arg2 ;
-(void)cancel;
-(void)main;
-(NSError *)stashedError;
-(void)operationWillFinish;
-(id)initWithZipFileURL:(id)arg1 ;
-(id)initWithZipFileURL:(id)arg1 destinationDirectoryURL:(id)arg2 ;
-(BOMCopierRef)copier;
-(void)setCopier:(BOMCopierRef)arg1 ;
-(NSURL *)destinationDirectoryURL;
-(NSURL *)zipFileURL;
-(void)setStashedError:(NSError *)arg1 ;
@end

