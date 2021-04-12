/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXNewMagazineRectArray;

@interface PXNewMagazineChunk : NSObject {

	long long _startIndexOfInputs;
	long long _startY;
	unsigned long long _numOfRects;
	PXNewMagazineRectArray* _rectsArray;
	unsigned long long _height;

}

@property (nonatomic,readonly) long long startIndexOfInputs;                     //@synthesize startIndexOfInputs=_startIndexOfInputs - In the implementation block
@property (nonatomic,readonly) long long startY;                                 //@synthesize startY=_startY - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfRects;                    //@synthesize numOfRects=_numOfRects - In the implementation block
@property (nonatomic,readonly) PXNewMagazineRectArray * rectsArray;              //@synthesize rectsArray=_rectsArray - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                        //@synthesize height=_height - In the implementation block
-(long long)startY;
-(unsigned long long)height;
-(unsigned long long)numOfRects;
-(PXNewMagazineRectArray *)rectsArray;
-(id)initWithStartY:(long long)arg1 startIndexOfInputs:(long long)arg2 rectsArray:(id)arg3 ;
-(long long)startIndexOfInputs;
@end

