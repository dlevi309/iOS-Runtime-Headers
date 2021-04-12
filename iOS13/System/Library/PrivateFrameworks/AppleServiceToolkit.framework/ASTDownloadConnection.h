/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

