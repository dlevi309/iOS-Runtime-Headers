/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

