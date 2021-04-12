/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
*/

typedef struct FLSimpleSpringState {
	double position;
	double velocity;
} FLSimpleSpringState;

typedef struct FLSimpleSpring {
	FLSimpleSpringState state;
	double mass;
	double stiffness;
	double damping;
	double anchor;
	double stablePositionThreshold;
	double stableVelocityThreshold;
} FLSimpleSpring;

typedef struct FLCompoundSpring {
	FLSimpleSpringState state;
	FLSimpleSpring stiffness;
	FLSimpleSpring damping;
	FLSimpleSpring dampingRatio;
	FLSimpleSpring response;
	FLSimpleSpring anchor;
	BOOL usesDampingRatioResponse;
} FLCompoundSpring;

typedef struct FLSpringParameters {
	double dampingRatio;
	double dampingRatioSmoothing;
	double response;
	double responseSmoothing;
} FLSpringParameters;

