/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMTextDetectionOptions, NSArray;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding> {

	BOOL _detectFaceRectangles;
	BOOL _detectFaceNames;
	BOOL _detectFaceAttributes;
	BOOL _detectFaceExpressions;
	BOOL _detectFaceLandmarks;
	BOOL _detectFacePose;
	BOOL _detectScenes;
	BOOL _detectModelClassifications;
	BOOL _detectCaptions;
	BOOL _detectTraits;
	BOOL _detectRectangles;
	BOOL _detectHorizon;
	BOOL _detectProminentObjects;
	BOOL _detectAesthetics;
	BOOL _detectIconClass;
	BOOL _detectText;
	BOOL _includeImageInResult;
	long long _clientID;
	AXMTextDetectionOptions* _textDetectionOptions;
	NSArray* _ignoredLayerContextIDs;

}

@property (assign,nonatomic) long long clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) BOOL hasDetectionsEnabled; 
@property (nonatomic,readonly) BOOL detectFaces; 
@property (assign,nonatomic) BOOL detectFaceRectangles;                                   //@synthesize detectFaceRectangles=_detectFaceRectangles - In the implementation block
@property (assign,nonatomic) BOOL detectFaceNames;                                        //@synthesize detectFaceNames=_detectFaceNames - In the implementation block
@property (assign,nonatomic) BOOL detectFaceAttributes;                                   //@synthesize detectFaceAttributes=_detectFaceAttributes - In the implementation block
@property (assign,nonatomic) BOOL detectFaceExpressions;                                  //@synthesize detectFaceExpressions=_detectFaceExpressions - In the implementation block
@property (assign,nonatomic) BOOL detectFaceLandmarks;                                    //@synthesize detectFaceLandmarks=_detectFaceLandmarks - In the implementation block
@property (assign,nonatomic) BOOL detectFacePose;                                         //@synthesize detectFacePose=_detectFacePose - In the implementation block
@property (assign,nonatomic) BOOL detectScenes;                                           //@synthesize detectScenes=_detectScenes - In the implementation block
@property (assign,nonatomic) BOOL detectModelClassifications;                             //@synthesize detectModelClassifications=_detectModelClassifications - In the implementation block
@property (assign,nonatomic) BOOL detectCaptions;                                         //@synthesize detectCaptions=_detectCaptions - In the implementation block
@property (assign,nonatomic) BOOL detectTraits;                                           //@synthesize detectTraits=_detectTraits - In the implementation block
@property (assign,nonatomic) BOOL detectRectangles;                                       //@synthesize detectRectangles=_detectRectangles - In the implementation block
@property (assign,nonatomic) BOOL detectHorizon;                                          //@synthesize detectHorizon=_detectHorizon - In the implementation block
@property (assign,nonatomic) BOOL detectProminentObjects;                                 //@synthesize detectProminentObjects=_detectProminentObjects - In the implementation block
@property (assign,nonatomic) BOOL detectAesthetics;                                       //@synthesize detectAesthetics=_detectAesthetics - In the implementation block
@property (assign,nonatomic) BOOL detectIconClass;                                        //@synthesize detectIconClass=_detectIconClass - In the implementation block
@property (assign,nonatomic) BOOL detectText;                                             //@synthesize detectText=_detectText - In the implementation block
@property (nonatomic,retain) AXMTextDetectionOptions * textDetectionOptions;              //@synthesize textDetectionOptions=_textDetectionOptions - In the implementation block
@property (assign,nonatomic) BOOL includeImageInResult;                                   //@synthesize includeImageInResult=_includeImageInResult - In the implementation block
@property (nonatomic,retain) NSArray * ignoredLayerContextIDs;                            //@synthesize ignoredLayerContextIDs=_ignoredLayerContextIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
+(id)voiceOverOptions;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setClientID:(long long)arg1 ;
-(long long)clientID;
-(BOOL)detectFaceNames;
-(BOOL)detectFaceAttributes;
-(BOOL)detectFaceExpressions;
-(BOOL)detectFaceLandmarks;
-(BOOL)detectFacePose;
-(BOOL)detectFaceRectangles;
-(NSArray *)ignoredLayerContextIDs;
-(BOOL)detectText;
-(BOOL)detectScenes;
-(BOOL)detectModelClassifications;
-(BOOL)detectCaptions;
-(BOOL)detectFaces;
-(BOOL)detectTraits;
-(BOOL)detectHorizon;
-(BOOL)detectRectangles;
-(BOOL)detectProminentObjects;
-(BOOL)detectIconClass;
-(BOOL)detectAesthetics;
-(BOOL)includeImageInResult;
-(AXMTextDetectionOptions *)textDetectionOptions;
-(void)setDetectIconClass:(BOOL)arg1 ;
-(void)setIncludeImageInResult:(BOOL)arg1 ;
-(void)setDetectText:(BOOL)arg1 ;
-(void)setTextDetectionOptions:(AXMTextDetectionOptions *)arg1 ;
-(void)setDetectScenes:(BOOL)arg1 ;
-(void)setDetectModelClassifications:(BOOL)arg1 ;
-(void)setDetectCaptions:(BOOL)arg1 ;
-(void)setDetectTraits:(BOOL)arg1 ;
-(void)setDetectFaceRectangles:(BOOL)arg1 ;
-(void)setDetectFaceNames:(BOOL)arg1 ;
-(void)setDetectFaceAttributes:(BOOL)arg1 ;
-(void)setDetectFaceExpressions:(BOOL)arg1 ;
-(void)setDetectFaceLandmarks:(BOOL)arg1 ;
-(void)setDetectFacePose:(BOOL)arg1 ;
-(void)setDetectProminentObjects:(BOOL)arg1 ;
-(void)setDetectHorizon:(BOOL)arg1 ;
-(void)setDetectRectangles:(BOOL)arg1 ;
-(void)setDetectAesthetics:(BOOL)arg1 ;
-(void)setIgnoredLayerContextIDs:(NSArray *)arg1 ;
-(BOOL)hasDetectionsEnabled;
@end

