/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSMutableArray, NSNumber, NSArray, NSDictionary;

@interface ATXHomeScreenEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	NSMutableArray* _stackIds;
	NSMutableArray* _widgets;
	NSNumber* _pageIndex;
	NSArray* _widgetsInStack;
	NSNumber* _isSuggestionInAddWidgetSheet;
	NSNumber* _isWidgetInTodayView;

}

@property (nonatomic,retain) NSNumber * pageIndex;                                 //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * stacks; 
@property (nonatomic,retain) NSArray * widgetsInStack;                             //@synthesize widgetsInStack=_widgetsInStack - In the implementation block
@property (nonatomic,retain) NSNumber * isSuggestionInAddWidgetSheet;              //@synthesize isSuggestionInAddWidgetSheet=_isSuggestionInAddWidgetSheet - In the implementation block
@property (nonatomic,retain) NSNumber * isWidgetInTodayView;                       //@synthesize isWidgetInTodayView=_isWidgetInTodayView - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)pageIndex;
-(void)setPageIndex:(NSNumber *)arg1 ;
-(void)setStacks:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)stacks;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsSuggestionInAddWidgetSheet:(NSNumber *)arg1 ;
-(void)setIsWidgetInTodayView:(NSNumber *)arg1 ;
-(NSNumber *)isSuggestionInAddWidgetSheet;
-(NSNumber *)isWidgetInTodayView;
-(void)setWidgetsInStack:(NSArray *)arg1 ;
-(id)initWithPageIndex:(id)arg1 stacks:(id)arg2 widgetsInStack:(id)arg3 isSuggestionInAddWidgetSheet:(id)arg4 isWidgetInTodayView:(id)arg5 ;
-(BOOL)isEqualToATXHomeScreenEventMetadata:(id)arg1 ;
-(NSArray *)widgetsInStack;
@end

