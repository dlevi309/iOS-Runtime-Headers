/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VEiOSSharedObject.h>

@interface FaceRecognizer : VEiOSSharedObject {

	BOOL _highAccuracy;

}

@property (assign,nonatomic) BOOL highAccuracy;              //@synthesize highAccuracy=_highAccuracy - In the implementation block
+(id)sharedRecognizer;
-(id)facesInImage:(id)arg1 ;
-(CGRect)containingRectForFaces:(id)arg1 scaleEachFaceRectBy:(double)arg2 ;
-(CGRect)containingRect:(id)arg1 ;
-(BOOL)highAccuracy;
-(void)setHighAccuracy:(BOOL)arg1 ;
@end

