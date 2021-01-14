/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

@class NSFileHandle;


@protocol ASTDownloadConnection <ASTConnection>
@property (nonatomic,copy) id didDownloadFile; 
@property (nonatomic,readonly) NSFileHandle * destinationFileHandle; 
@required
-(id)didDownloadFile;
-(void)setDidDownloadFile:(/*^block*/id)arg1;
-(NSFileHandle *)destinationFileHandle;

@end

