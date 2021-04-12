/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMMovieProviderDelegate;
@class VEKProduction, VEKResult, PMMovieProviderAnalyticsEvent;

@interface PMMovieProvider : NSObject {

	BOOL _isEditing;
	VEKProduction* _production;
	id<PMMovieProviderDelegate> _providerDelegate;
	VEKResult* _lastResult;
	PMMovieProviderAnalyticsEvent* _analyticsEvent;
	VEKProduction* _lastEditingProduction;
	unsigned long long _currentEditID;

}

@property (nonatomic,retain) VEKProduction * lastEditingProduction;                            //@synthesize lastEditingProduction=_lastEditingProduction - In the implementation block
@property (assign,nonatomic) unsigned long long currentEditID;                                 //@synthesize currentEditID=_currentEditID - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                                   //@synthesize isEditing=_isEditing - In the implementation block
@property (nonatomic,retain) VEKProduction * production;                                       //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMMovieProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,retain) VEKResult * lastResult;                                           //@synthesize lastResult=_lastResult - In the implementation block
@property (nonatomic,retain) PMMovieProviderAnalyticsEvent * analyticsEvent;                   //@synthesize analyticsEvent=_analyticsEvent - In the implementation block
+(unsigned long long)movieClipCountWithProduction:(id)arg1 result:(id)arg2 ;
-(id<PMMovieProviderDelegate>)providerDelegate;
-(PMMovieProviderAnalyticsEvent *)analyticsEvent;
-(BOOL)isEditing;
-(void)setAnalyticsEvent:(PMMovieProviderAnalyticsEvent *)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(VEKProduction *)production;
-(VEKResult *)lastResult;
-(void)setLastResult:(VEKResult *)arg1 ;
-(void)setProviderDelegate:(id<PMMovieProviderDelegate>)arg1 ;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(void)refreshPlayerItem;
-(void)cancelEdit;
-(void)setLastEditingProduction:(VEKProduction *)arg1 ;
-(unsigned long long)currentEditID;
-(void)setCurrentEditID:(unsigned long long)arg1 ;
-(VEKProduction *)lastEditingProduction;
@end

