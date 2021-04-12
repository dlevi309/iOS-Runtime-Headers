/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class DEMatchCriteria;

@interface DEFilter : NSObject {

	DEMatchCriteria* _include;
	DEMatchCriteria* _exclude;

}

@property (nonatomic,retain) DEMatchCriteria * include;              //@synthesize include=_include - In the implementation block
@property (nonatomic,retain) DEMatchCriteria * exclude;              //@synthesize exclude=_exclude - In the implementation block
+(void)filterToPb:(id)arg1 filterPb:(Filter*)arg2 ;
+(id)filterFromPb:(const Filter*)arg1 ;
+(id)catUpdates:(id)arg1 ;
+(id)filterThroughPb:(id)arg1 ;
+(id)catUpdates;
+(id)deprecatedCatSummary;
-(id)init;
-(id)initWithInclude:(id)arg1 exclude:(id)arg2 ;
-(void)setInclude:(DEMatchCriteria *)arg1 ;
-(DEMatchCriteria *)exclude;
-(BOOL)allows:(id)arg1 ;
-(DEMatchCriteria *)include;
-(void)setExclude:(DEMatchCriteria *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)apply:(/*^block*/id)arg1 to:(id)arg2 ;
@end

