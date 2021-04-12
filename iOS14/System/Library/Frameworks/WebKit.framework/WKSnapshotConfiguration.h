/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAfterScreenUpdates:(BOOL)arg1 ;
-(NSNumber *)snapshotWidth;
-(CGRect)rect;
-(id)init;
-(void)setSnapshotWidth:(NSNumber *)arg1 ;
-(BOOL)afterScreenUpdates;
-(void)setRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

