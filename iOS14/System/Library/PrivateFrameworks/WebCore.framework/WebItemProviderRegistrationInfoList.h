/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@class NSString, NSData, NSItemProvider;

@interface WebItemProviderRegistrationInfoList : NSObject {

	RetainPtr<NSMutableArray>* _representations;
	NSString* _suggestedName;
	long long _preferredPresentationStyle;
	NSData* _teamData;
	CGSize _preferredPresentationSize;

}

@property (assign,nonatomic) CGSize preferredPresentationSize;                  //@synthesize preferredPresentationSize=_preferredPresentationSize - In the implementation block
@property (nonatomic,copy) NSString * suggestedName;                            //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (assign,nonatomic) long long preferredPresentationStyle;              //@synthesize preferredPresentationStyle=_preferredPresentationStyle - In the implementation block
@property (nonatomic,copy) NSData * teamData;                                   //@synthesize teamData=_teamData - In the implementation block
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)numberOfItems;
-(void)addRepresentingObject:(id)arg1 ;
-(void)setPreferredPresentationSize:(CGSize)arg1 ;
-(CGSize)preferredPresentationSize;
-(long long)preferredPresentationStyle;
-(void)setPreferredPresentationStyle:(long long)arg1 ;
-(NSItemProvider *)itemProvider;
-(NSData *)teamData;
-(NSString *)suggestedName;
-(id)description;
-(void)setSuggestedName:(NSString *)arg1 ;
-(void)addData:(id)arg1 forType:(id)arg2 ;
-(void)addPromisedType:(id)arg1 fileCallback:(/*^block*/id)arg2 ;
-(void)enumerateItems:(/*^block*/id)arg1 ;
-(void)setTeamData:(NSData *)arg1 ;
-(void)dealloc;
@end

