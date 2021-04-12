/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXBlueprintMarker;
@class SXComponentInsert;

@interface SXComponentInsertionResult : NSObject {

	SXComponentInsert* _insert;
	id<SXBlueprintMarker> _marker;

}

@property (nonatomic,readonly) SXComponentInsert * insert;                //@synthesize insert=_insert - In the implementation block
@property (nonatomic,readonly) id<SXBlueprintMarker> marker;              //@synthesize marker=_marker - In the implementation block
-(id)initWithInsert:(id)arg1 marker:(id)arg2 ;
-(SXComponentInsert *)insert;
-(id<SXBlueprintMarker>)marker;
@end

