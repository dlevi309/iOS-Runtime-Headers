/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDMatchingAlgorithmMatch.h>

@class TSDMagicMoveMatchObject, TSDTextureContext, NSString;

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch> {

	TSDMagicMoveMatchObject* _outgoingObject;
	TSDMagicMoveMatchObject* _incomingObject;
	long long _matchType;
	double _distance;
	double _zOrderDistance;
	double _attributeMatchPercent;
	TSDTextureContext* _textureContext;
	long long _matchCost;
	NSString* _name;

}

@property (nonatomic,readonly) TSDMagicMoveMatchObject * outgoingObject;              //@synthesize outgoingObject=_outgoingObject - In the implementation block
@property (nonatomic,readonly) TSDMagicMoveMatchObject * incomingObject;              //@synthesize incomingObject=_incomingObject - In the implementation block
@property (assign,nonatomic) long long matchType;                                     //@synthesize matchType=_matchType - In the implementation block
@property (assign,nonatomic) double distance;                                         //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double zOrderDistance;                                   //@synthesize zOrderDistance=_zOrderDistance - In the implementation block
@property (assign,nonatomic) double attributeMatchPercent;                            //@synthesize attributeMatchPercent=_attributeMatchPercent - In the implementation block
@property (nonatomic,retain) TSDTextureContext * textureContext;                      //@synthesize textureContext=_textureContext - In the implementation block
@property (nonatomic,readonly) long long matchCost;                                   //@synthesize matchCost=_matchCost - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isTextMatch; 
@property (nonatomic,readonly) id incomingMatchObject; 
@property (nonatomic,readonly) id outgoingMatchObject; 
+(id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(long long)arg3 attributeMatchPercent:(double)arg4 textureContext:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)matchType;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setTextureContext:(TSDTextureContext *)arg1 ;
-(TSDTextureContext *)textureContext;
-(TSDMagicMoveMatchObject *)outgoingObject;
-(TSDMagicMoveMatchObject *)incomingObject;
-(void)p_updateMagicMoveCost;
-(void)setMatchType:(long long)arg1 ;
-(void)setAttributeMatchPercent:(double)arg1 ;
-(void)setZOrderDistance:(double)arg1 ;
-(long long)matchCost;
-(double)attributeMatchPercent;
-(double)zOrderDistance;
-(long long)compareToMatch:(id)arg1 ;
-(BOOL)conflictsWithMatch:(id)arg1 ;
-(id)incomingMatchObject;
-(id)outgoingMatchObject;
-(BOOL)isTextMatch;
@end

