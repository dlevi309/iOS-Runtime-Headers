/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol BRNonLocalVersionReceiving <NSObject>
@required
-(oneway void)versionsDone;
-(oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9;
-(oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1;

@end

