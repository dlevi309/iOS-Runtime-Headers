/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSMutableArray, NSString, NSURL, NSArray;

@interface LPEvent : NSObject {

	NSMutableArray* _children;
	long long _type;
	NSString* _subtitle;
	double _startTime;
	double _endTime;
	long long _status;
	NSURL* _URL;
	LPEvent* _parent;

}

@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,__weak,readonly) LPEvent * parent;               //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSArray * children;                    //@synthesize children=_children - In the implementation block
-(NSArray *)children;
-(BOOL)isComplete;
-(LPEvent *)parent;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)subtitle;
-(id)childWithType:(long long)arg1 subtitle:(id)arg2 ;
-(void)didCompleteWithErrorCode:(long long)arg1 ;
-(void)didCompleteWithStatus:(long long)arg1 ;
-(id)initWithType:(long long)arg1 subtitle:(id)arg2 ;
-(BOOL)_childrenAreComplete;
-(long long)type;
-(NSURL *)URL;
-(double)endTime;
-(double)duration;
-(double)startTime;
-(long long)status;
@end

