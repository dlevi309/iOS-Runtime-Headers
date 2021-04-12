/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentAnchor.h>
@class NSString;


@protocol SXComponentAnchor <NSObject>
@property (nonatomic,readonly) long long targetAnchorPosition; 
@property (nonatomic,readonly) long long originAnchorPosition; 
@property (nonatomic,readonly) NSString * targetComponentIdentifier; 
@property (nonatomic,readonly) NSRange range; 
@required
-(NSRange)range;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;

@end


@class NSString;

@interface SXComponentAnchor : NSObject <SXComponentAnchor> {

	NSString* _targetComponentIdentifier;
	long long _targetAnchorPosition;
	long long _originAnchorPosition;
	NSRange _range;

}

@property (assign,nonatomic) long long targetAnchorPosition;                      //@synthesize targetAnchorPosition=_targetAnchorPosition - In the implementation block
@property (assign,nonatomic) long long originAnchorPosition;                      //@synthesize originAnchorPosition=_originAnchorPosition - In the implementation block
@property (assign,nonatomic) NSRange range;                                       //@synthesize range=_range - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * targetComponentIdentifier;              //@synthesize targetComponentIdentifier=_targetComponentIdentifier - In the implementation block
-(NSString *)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;
-(id)initWithTargetComponentIdentifier:(id)arg1 ;
-(void)setTargetAnchorPosition:(long long)arg1 ;
-(void)setOriginAnchorPosition:(long long)arg1 ;
@end

