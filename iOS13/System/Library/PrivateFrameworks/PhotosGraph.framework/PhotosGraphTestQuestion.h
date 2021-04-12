/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <Photos/PHQuestion.h>

@class NSString, NSDictionary;

@interface PhotosGraphTestQuestion : PHQuestion {

	unsigned short _type;
	unsigned short _state;
	unsigned short _entityType;
	unsigned short _displayType;
	NSString* _entityIdentifier;
	double _score;
	NSDictionary* _additionalInfo;

}

@property (nonatomic,readonly) NSString * entityIdentifier;                //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned short type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short entityType;                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) unsigned short displayType;                 //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) double score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
-(unsigned short)type;
-(unsigned short)state;
-(double)score;
-(unsigned short)displayType;
-(NSDictionary *)additionalInfo;
-(NSString *)entityIdentifier;
-(unsigned short)entityType;
-(id)initWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7 ;
@end

