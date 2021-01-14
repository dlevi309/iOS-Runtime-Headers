/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OCXWriteState, TCXmlPrefixStreamWriter;

@interface PXAnimationWriteState : NSObject {

	unsigned long long mCommonTimeNodeDataId;
	OCXWriteState* mWriteState;
	TCXmlPrefixStreamWriter* mFile;
	BOOL mHasMainSeqTimeNodeId;
	unsigned long long mMainSeqTimeNodeId;

}

@property (nonatomic,retain) OCXWriteState * writeState; 
@property (nonatomic,retain) TCXmlPrefixStreamWriter * file; 
-(TCXmlPrefixStreamWriter *)file;
-(void)setFile:(TCXmlPrefixStreamWriter *)arg1 ;
-(id)initWithWriteState:(id)arg1 file:(id)arg2 ;
-(unsigned long long)newCommonTimeNodeDataId;
-(BOOL)hasMainSeqTimeNodeId;
-(void)setMainSeqTimeNodeId:(unsigned long long)arg1 ;
-(unsigned long long)mainSeqTimeNodeId;
-(OCXWriteState *)writeState;
-(void)setWriteState:(OCXWriteState *)arg1 ;
@end

