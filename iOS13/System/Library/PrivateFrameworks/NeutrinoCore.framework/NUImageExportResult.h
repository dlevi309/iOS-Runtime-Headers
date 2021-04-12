/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSURL, NSData;


@protocol NUImageExportResult <NUExportResult>
@property (readonly) NSURL * destinationURL; 
@property (readonly) NSData * destinationData; 
@required
-(NSURL *)destinationURL;
-(NSData *)destinationData;

@end

