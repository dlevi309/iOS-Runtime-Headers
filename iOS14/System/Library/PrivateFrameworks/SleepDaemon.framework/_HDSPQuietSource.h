/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSource.h>

@protocol HDSPSource;
@class NSString;

@interface _HDSPQuietSource : NSObject <HDSPSource> {

	BOOL _dontNotify;
	BOOL _dontSync;
	NSString* _sourceIdentifier;
	id<HDSPSource> _targetSource;

}

@property (nonatomic,retain) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) id<HDSPSource> targetSource;              //@synthesize targetSource=_targetSource - In the implementation block
@property (assign,nonatomic) BOOL dontNotify;                          //@synthesize dontNotify=_dontNotify - In the implementation block
@property (assign,nonatomic) BOOL dontSync;                            //@synthesize dontSync=_dontSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(BOOL)dontNotify;
-(BOOL)dontSync;
-(NSString *)sourceIdentifier;
-(id<HDSPSource>)targetSource;
-(void)setTargetSource:(id<HDSPSource>)arg1 ;
-(void)setDontNotify:(BOOL)arg1 ;
-(void)setDontSync:(BOOL)arg1 ;
@end

