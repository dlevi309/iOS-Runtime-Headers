/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPIdentifiedDataRepresentation <NSObject>
@optional
-(void)setFileStateIdentifier:(id)arg1;
-(BOOL)fromExternalReference;
-(void)setRelativeDataPath:(id)arg1;

@required
-(long long)identifier;
-(BOOL)isLoaded;
-(BOOL)setDataRepresentation:(id)arg1 shouldCopy:(BOOL)arg2 error:(id*)arg3;

@end

