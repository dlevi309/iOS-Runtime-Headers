/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLItemTransformerProtocol <NSObject>
@optional
-(id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3;
-(id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3;
-(id)transformedContentsFromSpotlightSearchableItemInfo:(id)arg1 context:(id)arg2 error:(id*)arg3;

@required
+(id)allowedOutputClasses;

@end

