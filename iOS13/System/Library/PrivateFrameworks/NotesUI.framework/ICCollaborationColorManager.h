/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSMutableDictionary, NSMutableArray;

@interface ICCollaborationColorManager : NSObject {

	NSMutableDictionary* _userIDToColorsDict;
	NSMutableArray* _colorUsageCounts;
	unsigned long long _colorUsageCountMinimum;

}

@property (nonatomic,retain) NSMutableDictionary * userIDToColorsDict;               //@synthesize userIDToColorsDict=_userIDToColorsDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * colorUsageCounts;                      //@synthesize colorUsageCounts=_colorUsageCounts - In the implementation block
@property (assign,nonatomic) unsigned long long colorUsageCountMinimum;              //@synthesize colorUsageCountMinimum=_colorUsageCountMinimum - In the implementation block
+(id)participantColors;
-(id)init;
-(id)highlightColorForUserID:(id)arg1 withPercentage:(double)arg2 forNote:(id)arg3 darkAppearance:(BOOL)arg4 ;
-(id)containerScopedUserRecordNameForAccount:(id)arg1 ;
-(id)baseColorValuesForUserID:(id)arg1 ;
-(NSMutableDictionary *)userIDToColorsDict;
-(NSMutableArray *)colorUsageCounts;
-(unsigned long long)colorUsageCountMinimum;
-(void)setColorUsageCountMinimum:(unsigned long long)arg1 ;
-(id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2 ;
-(void)setUserIDToColorsDict:(NSMutableDictionary *)arg1 ;
-(void)setColorUsageCounts:(NSMutableArray *)arg1 ;
@end

