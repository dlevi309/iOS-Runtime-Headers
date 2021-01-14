/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOMCopierRef)copier;
-(void)main;
-(void)operationWillFinish;
-(void)cancel;
-(id)initWithZipFileURL:(id)arg1 ;
-(id)initWithZipFileURL:(id)arg1 destinationDirectoryURL:(id)arg2 ;
-(void)setCopier:(BOMCopierRef)arg1 ;
-(NSURL *)destinationDirectoryURL;
-(NSURL *)zipFileURL;
-(NSError *)stashedError;
-(void)setStashedError:(NSError *)arg1 ;
@end

