/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplayConfiguration, NSOrderedSet;

@interface _FBSSnapshotContext : NSObject <NSCopying> {

	FBSDisplayConfiguration* _displayConfiguration;
	NSOrderedSet* _layers;
	BOOL _opaque;
	double _scale;
	CGSize _snapshotSize;
	BOOL _allowsProtectedContent;

}

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * layers;                                       //@synthesize layers=_layers - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                                   //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) double scale;                                                  //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize snapshotSize;                                           //@synthesize snapshotSize=_snapshotSize - In the implementation block
@property (assign,nonatomic) BOOL allowsProtectedContent;                                   //@synthesize allowsProtectedContent=_allowsProtectedContent - In the implementation block
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(NSOrderedSet *)layers;
-(double)scale;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)initWithDisplayConfiguration:(id)arg1 layers:(id)arg2 ;
-(void)setAllowsProtectedContent:(BOOL)arg1 ;
-(BOOL)allowsProtectedContent;
-(void)setScale:(double)arg1 ;
-(CGSize)snapshotSize;
-(void)setSnapshotSize:(CGSize)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 layer:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

