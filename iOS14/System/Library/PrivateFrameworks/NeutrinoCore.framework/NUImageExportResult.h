/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

