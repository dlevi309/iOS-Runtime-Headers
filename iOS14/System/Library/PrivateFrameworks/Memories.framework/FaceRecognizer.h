/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VEiOSSharedObject.h>

@interface FaceRecognizer : VEiOSSharedObject {

	BOOL _highAccuracy;

}

@property (assign,nonatomic) BOOL highAccuracy;              //@synthesize highAccuracy=_highAccuracy - In the implementation block
+(id)sharedRecognizer;
-(CGRect)containingRectForFaces:(id)arg1 scaleEachFaceRectBy:(double)arg2 ;
-(id)facesInImage:(id)arg1 ;
-(BOOL)highAccuracy;
-(CGRect)containingRect:(id)arg1 ;
-(void)setHighAccuracy:(BOOL)arg1 ;
@end

