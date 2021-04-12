/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNTUCallProvider.h>
@class NSString, NSSet;


@protocol CNTUCallProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
@required
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(BOOL)supportsAudio;
-(NSSet *)supportedHandleTypes;
-(BOOL)supportsVideo;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3;

@end


@class NSString, NSSet, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider> {

	TUCallProvider* _callProvider;

}

@property (nonatomic,copy) TUCallProvider * callProvider;                      //@synthesize callProvider=_callProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(BOOL)supportsAudio;
-(NSSet *)supportedHandleTypes;
-(BOOL)supportsVideo;
-(TUCallProvider *)callProvider;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3 ;
-(id)initWithCallProvider:(id)arg1 ;
@end

