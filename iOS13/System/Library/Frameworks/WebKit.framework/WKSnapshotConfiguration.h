/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying> {

	BOOL _afterScreenUpdates;
	NSNumber* _snapshotWidth;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                          //@synthesize rect=_rect - In the implementation block
@property (nonatomic,copy) NSNumber * snapshotWidth;               //@synthesize snapshotWidth=_snapshotWidth - In the implementation block
@property (assign,nonatomic) BOOL afterScreenUpdates;              //@synthesize afterScreenUpdates=_afterScreenUpdates - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(void)setAfterScreenUpdates:(BOOL)arg1 ;
-(NSNumber *)snapshotWidth;
-(void)setSnapshotWidth:(NSNumber *)arg1 ;
-(BOOL)afterScreenUpdates;
@end

