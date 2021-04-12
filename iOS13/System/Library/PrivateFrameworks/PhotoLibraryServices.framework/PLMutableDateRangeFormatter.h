/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSLocale;


@protocol PLMutableDateRangeFormatter <NSObject>
@property (assign,nonatomic) BOOL autoUpdateOnChanges; 
@property (assign,nonatomic) BOOL useLocalDates; 
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL shouldOmitYear; 
@required
-(void)setLocale:(id)arg1;
-(NSLocale *)locale;
-(void)setShouldOmitYear:(BOOL)arg1;
-(void)setUseLocalDates:(BOOL)arg1;
-(void)setAutoUpdateOnChanges:(BOOL)arg1;
-(void)configureForFormatPreset:(unsigned long long)arg1;
-(BOOL)autoUpdateOnChanges;
-(BOOL)useLocalDates;
-(BOOL)shouldOmitYear;

@end

